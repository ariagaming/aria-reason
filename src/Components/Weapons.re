open Models;

type actions =
  | ToggleWeaponsDialog;

type state = {
  showDialog: bool,
  newWeapon: option(weapon),
  selectedWeapon: option(weapon),
};

let initialState = {showDialog: false, newWeapon: None, selectedWeapon: None};

let contentStaticComponent = ReasonReact.reducerComponent("Weapons");

let make = (~weapons: weapons, _children) => {
  ...contentStaticComponent,
  initialState: () => initialState,
  reducer: (action: actions, state: state) =>
    switch (action) {
    | ToggleWeaponsDialog =>
      ReasonReact.Update({...state, showDialog: ! state.showDialog})
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
        shown=_self.state.showDialog
        cancel=(() => _self.send(ToggleWeaponsDialog))>
        ...<div> <input /> </div>
      </Dialog>
    </div>,
};

module WeaponsList = {
  let component = ReasonReact.statelessComponent("WeaponsList");
  let make = (~weapons, _children) => {
    ...component,
    render: _self =>
      <ul>
        (
          Array.map(
            weapon => <li> (ReasonReact.string(weapon.name)) </li>,
            weapons,
          )
          |> ReasonReact.array
        )
      </ul>,
  };
};