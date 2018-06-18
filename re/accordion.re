/* [@bs.module "react-native-collapsible"]
   external accordion : ReasonReact.reactClass = "./myJSReactClass"; */

[@bs.module "react-native-collapsible/Accordion"]
external myJSReactClass : ReasonReact.reactClass = "default";

[@bs.deriving abstract]
type jsProps('section) = {
  sections: array('section),
  renderHeader:
    ('section, int, bool, array('section)) => ReasonReact.reactElement,
  renderContent:
    ('section, int, bool, array('section)) => ReasonReact.reactElement,
  renderSectionTitle: ('section, int, bool) => ReasonReact.reactElement,
};

let make =
    (~sections, ~renderHeader, ~renderContent, ~renderSectionTitle, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=myJSReactClass,
    ~props=
      jsProps(~sections, ~renderHeader, ~renderContent, ~renderSectionTitle),
    children,
  );