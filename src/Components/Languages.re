open Models;

let contentStaticComponent = ReasonReact.statelessComponent("Content");

module RenderLanguage = {
  let c = ReasonReact.statelessComponent("cLanguage");
  let make = (~language: language, _children) => {
    ...c,
    render: _self =>
      <div className="content-row">
        <span style=(ReactDOMRe.Style.make(~flexBasis="20%", ()))>
          <BoughtIndicator source=language.boughtFrom />
          <BoughtIndicator source=language.expertiseFrom />
        </span>
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="20%", ~textAlign="center", ())
          )>
          (ReasonReact.string(string_of_int(language.base)))
        </span>
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="60%", ~textAlign="left", ())
          )>
          (ReasonReact.string(language.title))
        </span>
      </div>,
  };
};

let make = (~languages: languages, _children) => {
  ...contentStaticComponent,
  render: _self =>
    <Content title="Languages" className="content-languages">
      (
        ReasonReact.array(
          Array.map(
            (language: language) =>
              <RenderLanguage key=language.title language />,
            languages,
          ),
        )
      )
    </Content>,
};