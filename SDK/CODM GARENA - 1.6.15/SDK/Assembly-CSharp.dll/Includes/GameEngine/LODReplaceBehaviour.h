#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LODReplaceBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LODReplaceBehaviour"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& LOD_Half() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LOD_Full() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_LODGroup() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Status() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegister() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Register() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Apply() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyLODZeroFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyLODZeroHalf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_Status() {
		return ((T (*)(LODReplaceBehaviour*))(Il2CppBase() + 0x24A23F4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LODReplaceBehaviour*))(Il2CppBase() + 0x24A23FC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LODReplaceBehaviour*))(Il2CppBase() + 0x24A257C))(this);
	}
	template <typename T = void> T UnRegister() {
		return ((T (*)(LODReplaceBehaviour*))(Il2CppBase() + 0x24A267C))(this);
	}
	template <typename T = void> T Register() {
		return ((T (*)(LODReplaceBehaviour*))(Il2CppBase() + 0x24A24A0))(this);
	}
	template <typename T = void> T Apply(uintptr_t toStatus) {
		return ((T (*)(LODReplaceBehaviour*, uintptr_t))(Il2CppBase() + 0x24A2B14))(this, toStatus);
	}
	template <typename T = void> T ApplyLODZeroFull() {
		return ((T (*)(LODReplaceBehaviour*))(Il2CppBase() + 0x24A2E80))(this);
	}
	template <typename T = void> T ApplyLODZeroHalf() {
		return ((T (*)(LODReplaceBehaviour*))(Il2CppBase() + 0x24A3074))(this);
	}

};

}
