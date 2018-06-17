open BsReactNative;

type beer = {name: string};

let myBeers: array(beer) = [|
  {name: "Brio"},
  {name: "Ulfur"},
  {name: "Blagosi"},
|];

let app = () =>
  <View
    style=Style.(
            style([
              marginTop(Pct(30.)),
              flex(1.),
              justifyContent(Center),
              alignItems(Center),
            ])
          )>
    <FlatList
      data=myBeers
      keyExtractor=((item, _inx) => item.name)
      renderItem=(
        FlatList.renderItem(bag =>
          <Text> (ReasonReact.string(bag.item.name)) </Text>
        )
      )
    />
  </View>;
/* <View
     style=Style.(
             style([flex(1.), justifyContent(Center), alignItems(Center)])
           )>
     <Text> (ReasonReact.string("foobar")) </Text>
   </View>; */