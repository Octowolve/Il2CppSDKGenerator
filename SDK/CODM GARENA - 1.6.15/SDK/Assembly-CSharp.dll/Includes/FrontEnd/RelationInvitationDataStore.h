#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class RelationInvitationDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "RelationInvitationDataStore"));
	}

	template <typename T = int64_t> T& CurrentRequestTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& RequestTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> static T& RequestTimeCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LongitudeRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LatitudeRatio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& wakeUpParameters() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& CurrentInvitationType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Texture() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_TiggerLuckyBagValid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& LuckyBagUrl() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_TiggerLuckyBagValid() {
		return ((T (*)(RelationInvitationDataStore*))(Il2CppBase() + 0x3844470))(this);
	}
	template <typename T = void> T set_TiggerLuckyBagValid(bool value) {
		return ((T (*)(RelationInvitationDataStore*, bool))(Il2CppBase() + 0x3844490))(this, value);
	}

};

}
