let contentStaticComponent =
  ReasonReact.statelessComponent("SecondaryCombat");

let make = _children => {
  ...contentStaticComponent,
  render: _self =>
    <div className="combat-statistics">
      <ContentStatic title="ap offense" value="3" prefix="-" postfix="" />
      <ContentStatic title="ap defense" value="3" prefix="-" postfix="" />
      <ContentStatic title="ap recovery" value="4" prefix="+" postfix="" />
      <ContentStatic title="dmg per ap" value="1" prefix="+" postfix="" />
      <ContentStatic title="def. per ap" value="1" prefix="-" postfix="" />
    </div>,
};