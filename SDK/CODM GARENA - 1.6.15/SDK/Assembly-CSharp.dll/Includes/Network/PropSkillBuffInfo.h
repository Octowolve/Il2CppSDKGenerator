#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class PropSkillBuffInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "PropSkillBuffInfo"));
	}

	template <typename T = uint16_t> T& BuffType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& BuffValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& ImmediateEffect() {
		return *(T*)((uintptr_t)this + 0x10);
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
		return ((T (*)(PropSkillBuffInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5080AB8))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PropSkillBuffInfo*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x5080BFC))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x5080D38))(0, data, DataIndex);
	}

};

}
