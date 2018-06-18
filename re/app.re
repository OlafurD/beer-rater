open BsReactNative;

type beer = {name: string};
type section = {
  title: string,
  content: string,
};

let sections: array(section) = [|
  {title: "Borg", content: "Ulfur"},
  {title: "Olvisholt", content: "Lemon IPA"},
|];

let myBeers: array(beer) = [|
  {name: "Brio"},
  {name: "Ulfur"},
  {name: "Blagosi"},
|];

let app = () =>
  <View style=Style.(style([marginTop(Pt(30.)), flex(1.)]))>
    <Accordion
      sections
      renderSectionTitle=(
        (sec: section, _b, _c) =>
          <Text> (ReasonReact.string(sec.title)) </Text>
      )
      renderHeader=((_section, _b, _c, _d) => <Text value="header" />)
      renderContent=(
        (section, _b, _c, _d) =>
          <Text> (ReasonReact.string(section.content)) </Text>
      )
    />
  </View>;
/* <View
     style=Style.(
             style([flex(1.), justifyContent(Center), alignItems(Center)])
           )>
     <Text> (ReasonReact.string("foobar")) </Text>
   </View>; */