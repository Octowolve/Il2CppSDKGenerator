#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPC_Base"));
	}

	template <typename T = int32_t> T& m_NPCId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_NPCType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_NPCDescribe() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_bTrigger() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_Camp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& m_bDynamicCollider() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& MeshAssetID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& RotAngle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ColliderCmp() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NPCBase*))(Il2CppBase() + 0x3EE0A1C))(this);
	}
	template <typename T = void> T Copy(uintptr_t data) {
		return ((T (*)(NPCBase*, uintptr_t))(Il2CppBase() + 0x3EE0B54))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NPCBase*))(Il2CppBase() + 0x3EE0C9C))(this);
	}

};

}
