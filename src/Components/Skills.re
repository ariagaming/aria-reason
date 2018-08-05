open Models;

let contentStaticComponent = ReasonReact.statelessComponent("Content");

module RenderSkill = {
  let c = ReasonReact.statelessComponent("cSkill");
  let make = (~skill: skill, _children) => {
    ...c,
    render: _self =>
      <div className="content-row">
        <span style=(ReactDOMRe.Style.make(~flexBasis="20%", ()))>
          <BoughtIndicator source=skill.boughtFrom />
          <BoughtIndicator source=skill.expertiseFrom />
        </span>
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="20%", ~textAlign="center", ())
          )>
          (ReasonReact.string(string_of_int(skill.base)))
        </span>
        <span
          style=(
            ReactDOMRe.Style.make(~flexBasis="60%", ~textAlign="left", ())
          )>
          (ReasonReact.string(skill.title))
        </span>
      </div>,
  };
};

let make = (~skills: skills, _children) => {
  ...contentStaticComponent,
  render: _self =>
    <Content title="Skills" className="content-skills">
      ...(
           ReasonReact.array(
             Array.map(
               (skill: skill) => <RenderSkill key=skill.title skill />,
               skills,
             ),
           )
         )
    </Content>,
};