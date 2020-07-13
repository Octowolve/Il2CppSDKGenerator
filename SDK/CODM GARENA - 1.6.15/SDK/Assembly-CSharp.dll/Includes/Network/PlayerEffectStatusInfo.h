#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class PlayerEffectStatusInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "PlayerEffectStatusInfo"));
	}

	template <typename T = uint32_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& SyncMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& Status() {
		return *(T*)((uintptr_t)this + 0xD);
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
		return ((T (*)(PlayerEffectStatusInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x507FBDC))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PlayerEffectStatusInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x507FD20))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x507FE5C))(0, data, DataIndex);
	}

};

}
