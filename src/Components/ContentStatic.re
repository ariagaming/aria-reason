let contentStaticComponent = ReasonReact.statelessComponent("ContentStatic");

let make = (~title, ~value, ~prefix, ~postfix, _children) => {
  ...contentStaticComponent,
  render: _self =>
    <div className="content content-statistic">
      <div className="title"> (ReasonReact.string(title)) </div>
      <div className="value">
        <div className="prefix"> (ReasonReact.string(prefix)) </div>
        <div className="value-number"> (ReasonReact.string(value)) </div>
        <div className="postfix"> (ReasonReact.string(postfix)) </div>
      </div>
    </div>,
};