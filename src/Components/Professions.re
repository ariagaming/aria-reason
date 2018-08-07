open Models;

let contentStaticComponent = ReasonReact.statelessComponent("Professions");

module RenderProfession = {
  let innerProfessions = ReasonReact.statelessComponent("innerProfessions");
  let make = (~profession: profession, _children) => {
    ...innerProfessions,
    render: _self =>
      <div className="content-row">
        <span style=(ReactDOMRe.Style.make(~flexBasis="20%", ()))>
          <BoughtIndicator source=profession.boughtFrom />
          <BoughtIndicator source=profession.expertiseFrom />
        </span>
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="20%", ~textAlign="center", ())
          )>
          (ReasonReact.string(string_of_int(profession.base)))
        </span>
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="60%", ~textAlign="left", ())
          )>
          (ReasonReact.string(profession.title))
        </span>
      </div>,
  };
};

let make = (~professions: professions, _children) => {
  ...contentStaticComponent,
  render: _self =>
    <Content title="professions" className="content-professions">
      (
        ReasonReact.array(
          Array.map(
            (profession: profession) =>
              <RenderProfession key=profession.title profession />,
            professions,
          ),
        )
      )
    </Content>,
};