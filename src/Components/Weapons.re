open Models;

let contentStaticComponent = ReasonReact.statelessComponent("Weapons");

module RenderWeapon = {
  let innerWeapons = ReasonReact.statelessComponent("innerWeapons");
  let make = (~weapon: weapon, _children) => {
    ...innerWeapons,
    render: _self =>
      <div className="content-row">
        <span style=(ReactDOMRe.Style.make(~flexBasis="20%", ())) />
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="20%", ~textAlign="center", ())
          )
        />
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="60%", ~textAlign="left", ())
          )>
          (ReasonReact.string(weapon.title))
        </span>
      </div>,
  };
};

let make = (~weapons: weapons, _children) => {
  ...contentStaticComponent,
  render: _self =>
    <Content title="weapons" className="content-weapons">
      ...(
           ReasonReact.array(
             Array.map(
               (weapon: weapon) => <RenderWeapon key=weapon.title weapon />,
               weapons,
             ),
           )
         )
    </Content>,
};