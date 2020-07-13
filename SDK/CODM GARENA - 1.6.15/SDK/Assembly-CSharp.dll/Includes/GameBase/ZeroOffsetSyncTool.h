#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ZeroOffsetSyncTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ZeroOffsetSyncTool"));
	}

	template <typename T = bool> T& m_IsSync() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_Offset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_SyncTarget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Cache() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> static T& EnableLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& UseLateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartSyncOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSync() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_CacheTransform() {
		return ((T (*)(ZeroOffsetSyncTool*))(Il2CppBase() + 0x49EBB90))(this);
	}
	template <typename T = void> T StartSyncOffset(uintptr_t target, uintptr_t owner) {
		return ((T (*)(ZeroOffsetSyncTool*, uintptr_t, uintptr_t))(Il2CppBase() + 0x49EBC60))(this, target, owner);
	}
	template <typename T = void> T DoSync() {
		return ((T (*)(ZeroOffsetSyncTool*))(Il2CppBase() + 0x49EBF20))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ZeroOffsetSyncTool*))(Il2CppBase() + 0x49EC49C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ZeroOffsetSyncTool*))(Il2CppBase() + 0x49EC578))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ZeroOffsetSyncTool*))(Il2CppBase() + 0x49EC690))(this);
	}

};

}
