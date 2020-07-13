#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class S2CSYNCAIATTACK
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "S2C_SYNC_AIATTACK"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& SeqNo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& CurTimeMs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& StopAttack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& FireType() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = int16_t> T& DamageRadius() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = uint32_t> T& AttackParam1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& StepCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Steps() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = unsigned char> T& BehaviorIdx() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CSYNCAIATTACK*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E64758))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(S2CSYNCAIATTACK*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4E64B5C))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4E650F0))(0, data, DataIndex);
	}

};

}
