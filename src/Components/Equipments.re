open Models;

let contentStaticComponent = ReasonReact.statelessComponent("Content");

module RenderEquipment = {
  let c = ReasonReact.statelessComponent("cEquipment");
  let make = (~equipment: equipment, _children) => {
    ...c,
    render: _self =>
      <div className="equipment-row">
        <span className="location">
          (ReasonReact.string(equipment.location))
        </span>
      </div>,
  };
};

let make = (~equipments: equipments, _children) => {
  ...contentStaticComponent,
  render: _self =>
    <Content title="Equipment" className="content-equipments hide-border">
      (
        ReasonReact.array(
          Array.map(
            (equipment: equipment) =>
              <RenderEquipment key=equipment.title equipment />,
            equipments,
          ),
        )
      )
    </Content>,
};