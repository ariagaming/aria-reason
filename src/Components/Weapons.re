open Models;

type actions =
  | ToggleWeaponsDialog
  | SelectWeapon(weapon);

type state = {
  showDialog: bool,
  newWeapon: option(weapon),
  selectedWeapon: option(weapon),
};

let initialState = {showDialog: false, newWeapon: None, selectedWeapon: None};

let contentStaticComponent = ReasonReact.reducerComponent("Weapons");

type fmap('a, 'b) = ('a => 'b, option('a)) => option('b);
let fmap = (f, o) =>
  switch (o) {
  | None => None
  | Some(a) => Some(f(a))
  };
let isSelected = (p, o) =>
  switch (o) {
  | None => ""
  | Some(a) => p(a) ? "selected" : ""
  };

module WeaponsList = {
  let component = ReasonReact.statelessComponent("WeaponsList");
  let make =
      (
        ~weapons: weapons,
        ~selectedWeapon: option(weapon),
        ~selectAction,
        _children,
      ) => {
    let createRow = (selectedWeapon: option(weapon), weapon: weapon) =>
      <li
        key=weapon.name
        className=(
          isSelected((w: weapon) => weapon.name === w.name, selectedWeapon)
        )
        onClick=(selectAction(weapon))>
        (ReasonReact.string(weapon.name))
      </li>;

    {
      ...component,
      render: _self =>
        <ul className="list">
          (
            Array.map(createRow(selectedWeapon), weapons) |> ReasonReact.array
          )
        </ul>,
    };
  };
};

let make = (~weapons: weapons, _children) => {
  ...contentStaticComponent,
  initialState: () => initialState,
  reducer: (action: actions, state: state) =>
    switch (action) {
    | ToggleWeaponsDialog =>
      ReasonReact.Update({...state, showDialog: ! state.showDialog})
    | SelectWeapon(w) =>
      ReasonReact.Update({...state, selectedWeapon: Some(w)})
    },
  render: _self =>
    <div>
      <Content
        title="weapons"
        className="content-weapons"
        onClick=(_ => _self.send(ToggleWeaponsDialog))>
        (
          Array.map(
            (weapon: weapon) => <WeaponDetails key=weapon.title weapon />,
            weapons,
          )
          |> ReasonReact.array
        )
      </Content>
      <Dialog
        title="Weapons"
        shown=_self.state.showDialog
        cancel=(() => _self.send(ToggleWeaponsDialog))>
        ...<div>
             <WeaponsList
               weapons
               selectedWeapon=_self.state.selectedWeapon
               selectAction=((w, t) => _self.send(SelectWeapon(w)))
             />
           </div>
      </Dialog>
    </div>,
};