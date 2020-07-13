#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BRLadderSeasonInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BRLadderSeasonInfo"));
	}

	template <typename T = uint32_t> T& _season_no() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _begin_time_str() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _end_time_str() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _begin_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _SeasonNumber() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_SeasonName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _ShowAwardItem1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _ShowAwardItem2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _ShowAwardItem3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _ShowAwardSuperItem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowAwardSuperTexture() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SeasonLogo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowSeasonLogo() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _RankDetailBg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _RankLeaderboard() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uint32_t> T get_season_no() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E020))(this);
	}
	template <typename T = void> T set_season_no(uint32_t value) {
		return ((T (*)(BRLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x510E028))(this, value);
	}
	template <typename T = Il2CppString*> T get_begin_time_str() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E030))(this);
	}
	template <typename T = void> T set_begin_time_str(Il2CppString* value) {
		return ((T (*)(BRLadderSeasonInfo*, Il2CppString*))(Il2CppBase() + 0x510E038))(this, value);
	}
	template <typename T = Il2CppString*> T get_end_time_str() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E040))(this);
	}
	template <typename T = void> T set_end_time_str(Il2CppString* value) {
		return ((T (*)(BRLadderSeasonInfo*, Il2CppString*))(Il2CppBase() + 0x510E048))(this, value);
	}
	template <typename T = uint32_t> T get_begin_time() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E050))(this);
	}
	template <typename T = void> T set_begin_time(uint32_t value) {
		return ((T (*)(BRLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x510E058))(this, value);
	}
	template <typename T = uint32_t> T get_end_time() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E060))(this);
	}
	template <typename T = void> T set_end_time(uint32_t value) {
		return ((T (*)(BRLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x510E068))(this, value);
	}
	template <typename T = uint32_t> T get_SeasonNumber() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E070))(this);
	}
	template <typename T = void> T set_SeasonNumber(uint32_t value) {
		return ((T (*)(BRLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x510E078))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_SeasonName() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E080))(this);
	}
	template <typename T = void> T set_LOCID_SeasonName(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E088))(this, value);
	}
	template <typename T = uint32_t> T get_ShowAwardItem1() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E090))(this);
	}
	template <typename T = void> T set_ShowAwardItem1(uint32_t value) {
		return ((T (*)(BRLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x510E098))(this, value);
	}
	template <typename T = uint32_t> T get_ShowAwardItem2() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E0A0))(this);
	}
	template <typename T = void> T set_ShowAwardItem2(uint32_t value) {
		return ((T (*)(BRLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x510E0A8))(this, value);
	}
	template <typename T = uint32_t> T get_ShowAwardItem3() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E0B0))(this);
	}
	template <typename T = void> T set_ShowAwardItem3(uint32_t value) {
		return ((T (*)(BRLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x510E0B8))(this, value);
	}
	template <typename T = uint32_t> T get_ShowAwardSuperItem() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E0C0))(this);
	}
	template <typename T = void> T set_ShowAwardSuperItem(uint32_t value) {
		return ((T (*)(BRLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x510E0C8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowAwardSuperTexture() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E0D0))(this);
	}
	template <typename T = void> T set_ShowAwardSuperTexture(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E0D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SeasonLogo() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E0E0))(this);
	}
	template <typename T = void> T set_SeasonLogo(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E0E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowSeasonLogo() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E0F0))(this);
	}
	template <typename T = void> T set_ShowSeasonLogo(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E0F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RankDetailBg() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E100))(this);
	}
	template <typename T = void> T set_RankDetailBg(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E108))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RankLeaderboard() {
		return ((T (*)(BRLadderSeasonInfo*))(Il2CppBase() + 0x510E110))(this);
	}
	template <typename T = void> T set_RankLeaderboard(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BRLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510E118))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BRLadderSeasonInfo*, bool))(Il2CppBase() + 0x510E120))(this, createIfMissing);
	}

};

}
