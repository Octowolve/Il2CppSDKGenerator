#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SetLayerDepth
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SetLayerDepth"));
	}

	template <typename T = Il2CppString*> T& m_LayerName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Depth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_ChangeChildren() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SetLayerDepth*))(Il2CppBase() + 0x4489690))(this);
	}

};

}
