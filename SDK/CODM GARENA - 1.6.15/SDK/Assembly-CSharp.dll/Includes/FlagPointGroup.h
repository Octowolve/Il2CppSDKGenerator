#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FlagPointGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FlagPointGroup"));
	}

	template <typename T = uintptr_t> T& RootIconGameObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& SpriteIcon() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& RootLabelGameObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SpriteLine() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LabelDesc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_List2Vector3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRightVector() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(FlagPointGroup*, uintptr_t))(Il2CppBase() + 0x33086AC))(this, data);
	}
	template <typename T = Il2CppVector3> T List2Vector3(Il2CppList<float>* list, Il2CppVector3 defaut) {
		return ((T (*)(FlagPointGroup*, Il2CppList<float>*, Il2CppVector3))(Il2CppBase() + 0x330C858))(this, list, defaut);
	}
	template <typename T = bool> T IsRightVector(Il2CppList<float>* vectorArray) {
		return ((T (*)(FlagPointGroup*, Il2CppList<float>*))(Il2CppBase() + 0x330C9E4))(this, vectorArray);
	}

};

}
