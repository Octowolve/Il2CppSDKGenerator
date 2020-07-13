#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassGetAwardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassGetAwardReq"));
	}

	template <typename T = uintptr_t> T& _award_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _award_key() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _end_key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _season_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_award_type() {
		return ((T (*)(CSBattlePassGetAwardReq*))(Il2CppBase() + 0x51E4F40))(this);
	}
	template <typename T = void> T set_award_type(uintptr_t value) {
		return ((T (*)(CSBattlePassGetAwardReq*, uintptr_t))(Il2CppBase() + 0x51E4F48))(this, value);
	}
	template <typename T = int32_t> T get_award_key() {
		return ((T (*)(CSBattlePassGetAwardReq*))(Il2CppBase() + 0x51E4F50))(this);
	}
	template <typename T = void> T set_award_key(int32_t value) {
		return ((T (*)(CSBattlePassGetAwardReq*, int32_t))(Il2CppBase() + 0x51E4F58))(this, value);
	}
	template <typename T = int32_t> T get_end_key() {
		return ((T (*)(CSBattlePassGetAwardReq*))(Il2CppBase() + 0x51E4F60))(this);
	}
	template <typename T = void> T set_end_key(int32_t value) {
		return ((T (*)(CSBattlePassGetAwardReq*, int32_t))(Il2CppBase() + 0x51E4F68))(this, value);
	}
	template <typename T = int32_t> T get_season_id() {
		return ((T (*)(CSBattlePassGetAwardReq*))(Il2CppBase() + 0x51E4F70))(this);
	}
	template <typename T = void> T set_season_id(int32_t value) {
		return ((T (*)(CSBattlePassGetAwardReq*, int32_t))(Il2CppBase() + 0x51E4F78))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassGetAwardReq*, bool))(Il2CppBase() + 0x51E4F80))(this, createIfMissing);
	}

};

}
