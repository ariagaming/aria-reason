open Models;

let contentStaticComponent = ReasonReact.statelessComponent("Resistances");

module RenederResistance = {
  let innerResistance = ReasonReact.statelessComponent("InnerResistance");
  let make = (~resistance: resistance, _children) => {
    ...innerResistance,
    render: _self =>
      <div className="content-row">
        <span style=(ReactDOMRe.Style.make(~flexBasis="20%", ()))>
          <BoughtIndicator source=resistance.boughtFrom />
          <BoughtIndicator source=resistance.expertiseFrom />
        </span>
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="20%", ~textAlign="center", ())
          )>
          (ReasonReact.string(string_of_int(resistance.base)))
        </span>
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="60%", ~textAlign="left", ())
          )>
          (ReasonReact.string(resistance.title))
        </span>
      </div>,
  };
};

let make = (~resistances: resistances, _children) => {
  ...contentStaticComponent,
  render: _self =>
    <Content title="Resistances" className="content-resistances">
      ...(
           ReasonReact.array(
             Array.map(
               (resistance: resistance) =>
                 <RenederResistance key=resistance.title resistance />,
               resistances,
             ),
           )
         )
    </Content>,
};