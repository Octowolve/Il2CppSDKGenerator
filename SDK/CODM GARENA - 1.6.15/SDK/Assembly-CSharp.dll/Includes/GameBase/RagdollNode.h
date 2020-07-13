#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class RagdollNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "RagdollNode"));
	}

	template <typename T = uintptr_t> T& rigidbody() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_bindBone() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AliveCallback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PhysicsFrame() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_lastPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_lastTimer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_nullFuction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AliveRagdoll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FromBindBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToBindBone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_rigidbody() {
		return ((T (*)(RagdollNode*))(Il2CppBase() + 0x2DDBED0))(this);
	}
	template <typename T = void> T set_rigidbody(uintptr_t value) {
		return ((T (*)(RagdollNode*, uintptr_t))(Il2CppBase() + 0x2DDB5FC))(this, value);
	}
	template <typename T = void> T set_bindBone(uintptr_t value) {
		return ((T (*)(RagdollNode*, uintptr_t))(Il2CppBase() + 0x2DDB604))(this, value);
	}
	template <typename T = uintptr_t> T get_bindBone() {
		return ((T (*)(RagdollNode*))(Il2CppBase() + 0x2DDB1C4))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(RagdollNode*))(Il2CppBase() + 0x2DDB1CC))(this);
	}
	template <typename T = void> static T nullFuction() {
		return ((T (*)(void *))(Il2CppBase() + 0x2DDBED8))(0);
	}
	template <typename T = bool> T AliveRagdoll() {
		return ((T (*)(RagdollNode*))(Il2CppBase() + 0x2DD8368))(this);
	}
	template <typename T = void> T FromBindBone() {
		return ((T (*)(RagdollNode*))(Il2CppBase() + 0x2DDBF68))(this);
	}
	template <typename T = void> T ToBindBone() {
		return ((T (*)(RagdollNode*))(Il2CppBase() + 0x2DDB874))(this);
	}

};

}
