let dialogComponent = ReasonReact.statelessComponent("DialogComponent");

let make = (~shown=false, ~title="No title", ~cancel, _children) => {
  let cancelHandler = t => cancel();
  {
    ...dialogComponent,
    render: _self =>
      ReasonReact.createDomElement(
        "div",
        ~props={"className": "dialog", "data-shown": shown},
        [|
          <div className="dialog--inner">
            <div className="title"> (ReasonReact.string(title)) </div>
            <div className="dialog-content"> _children </div>
            <div className="footer">
              <button className="btn-submit">
                (ReasonReact.string("Submit"))
              </button>
              <button className="btn-cancel" onClick=cancelHandler>
                (ReasonReact.string("Cancel"))
              </button>
            </div>
          </div>,
        |],
      ),
  };
};