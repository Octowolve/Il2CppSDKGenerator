#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.Individuations {

class Individuation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.Individuations", "Individuation"));
	}

	template <typename T = uintptr_t> T& baseMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Actions() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_ActionType() {
		return ((T (*)(Individuation*))(Il2CppBase() + 0x3708498))(this);
	}
	template <typename T = uintptr_t> T GetAction(Il2CppString* inActionName) {
		return ((T (*)(Individuation*, Il2CppString*))(Il2CppBase() + 0x37084A0))(this, inActionName);
	}
	template <typename T = uintptr_t> T GetAction_1(int32_t inAssetID) {
		return ((T (*)(Individuation*, int32_t))(Il2CppBase() + 0x37086A8))(this, inAssetID);
	}

};

}
