let dialogComponent = ReasonReact.statelessComponent("DialogComponent");

let make = (~shown=false, ~cancel, _children) => {
  let cancelHandler = t => cancel();
  {
    ...dialogComponent,
    render: _self =>
      ReasonReact.createDomElement(
        "div",
        ~props={"className": "dialog", "data-shown": shown},
        [|
          <div className="dialog--inner">
            _children
            <div className="footer">
              <button className="btn-cancel" onClick=cancelHandler>
                (ReasonReact.string("Cancel"))
              </button>
              <button className="btn-submit">
                (ReasonReact.string("Submit"))
              </button>
            </div>
          </div>,
        |],
      ),
  };
};