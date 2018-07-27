open Models;

let contentStaticComponent = ReasonReact.statelessComponent("Content");

module RenderSkill = {
  let c = ReasonReact.statelessComponent("cSkill");
  let make = (~title, _children) => {
    ...c,
    render: _self =>
      <div className="content-row"> (ReasonReact.string(title)) </div>,
  };
};

let make = (~skills: skills, _children) => {
  ...contentStaticComponent,
  render: _self =>
    <Content title="Skills" className="content-skills">
      ...(
           ReasonReact.array(
             Array.map(skill => <RenderSkill title=skill.title />, skills),
           )
         )
    </Content>,
};