#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeBuySentryTowerReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_BuySentryTower_Req"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _prop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChallengeBuySentryTowerReq*))(Il2CppBase() + 0x51E5D90))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChallengeBuySentryTowerReq*, int32_t))(Il2CppBase() + 0x51E5D98))(this, value);
	}
	template <typename T = uintptr_t> T get_prop() {
		return ((T (*)(CSChallengeBuySentryTowerReq*))(Il2CppBase() + 0x51E5DA0))(this);
	}
	template <typename T = void> T set_prop(uintptr_t value) {
		return ((T (*)(CSChallengeBuySentryTowerReq*, uintptr_t))(Il2CppBase() + 0x51E5DA8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeBuySentryTowerReq*, bool))(Il2CppBase() + 0x51E5DB0))(this, createIfMissing);
	}

};

}
