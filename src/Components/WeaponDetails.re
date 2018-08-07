open Models;
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
        style=(ReactDOMRe.Style.make(~flexBasis="60%", ~textAlign="left", ()))>
        (ReasonReact.string(weapon.title))
      </span>
    </div>,
};