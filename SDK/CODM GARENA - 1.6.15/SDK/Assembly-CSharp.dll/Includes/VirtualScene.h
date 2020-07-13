#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VirtualScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VirtualScene"));
	}

	template <typename T = Il2CppString*> T& sceneName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& prefabInstances() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _sceneState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> static T& VirtualSceneTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearNonSerializedData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_sceneState() {
		return ((T (*)(VirtualScene*))(Il2CppBase() + 0x488CCF4))(this);
	}
	template <typename T = void> T set_sceneState(uintptr_t value) {
		return ((T (*)(VirtualScene*, uintptr_t))(Il2CppBase() + 0x488CCFC))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(VirtualScene*))(Il2CppBase() + 0x488CD04))(this);
	}
	template <typename T = void> T ClearNonSerializedData() {
		return ((T (*)(VirtualScene*))(Il2CppBase() + 0x488CE08))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(VirtualScene*))(Il2CppBase() + 0x488CF04))(this);
	}

};

}
