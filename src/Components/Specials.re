open Models;

let contentStaticComponent = ReasonReact.statelessComponent("Specials");

module RenderWeapon = {
  let innerSpecials = ReasonReact.statelessComponent("innerSpecials");
  let make = (~special: special, _children) => {
    ...innerSpecials,
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
          (ReasonReact.string(special.title))
        </span>
      </div>,
  };
};

let make = (~specials: specials, _children) => {
  ...contentStaticComponent,
  render: _self =>
    <Content title="specials" className="content-specials">
      ...(
           ReasonReact.array(
             Array.map(
               (special: special) =>
                 <RenderWeapon key=special.title special />,
               specials,
             ),
           )
         )
    </Content>,
};