#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IWrapContent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IWrapContent"));
	}


	template <typename T = float> T GetFullSize() {
		return ((T (*)(IWrapContent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = float> T GetItemWidth() {
		return ((T (*)(IWrapContent*))(Il2CppBase() + 0x0))(this);
	}

};

}
