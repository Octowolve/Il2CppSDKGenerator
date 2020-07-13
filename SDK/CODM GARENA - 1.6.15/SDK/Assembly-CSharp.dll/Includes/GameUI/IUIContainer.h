#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class IUIContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "IUIContainer"));
	}


	template <typename T = void> T Init() {
		return ((T (*)(IUIContainer*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T RemoveUIView(Il2CppString* InViewID) {
		return ((T (*)(IUIContainer*, Il2CppString*))(Il2CppBase() + 0x0))(this, InViewID);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(IUIContainer*))(Il2CppBase() + 0x0))(this);
	}

};

}
