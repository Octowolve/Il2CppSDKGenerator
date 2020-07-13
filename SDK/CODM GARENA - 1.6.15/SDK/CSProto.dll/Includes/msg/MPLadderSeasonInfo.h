#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MPLadderSeasonInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MPLadderSeasonInfo"));
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
	template <typename T = Il2CppArray<uintptr_t>*> T& _SeasonVideoPart1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SeasonVideoPart2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _AudioBnk() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _AudioPlay() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _AudioStop() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SeasonLogo() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowSeasonLogo() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SeasonEntranceBackground() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _RankDetailBg() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _RankLeaderboard() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uint32_t> T get_season_no() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5380))(this);
	}
	template <typename T = void> T set_season_no(uint32_t value) {
		return ((T (*)(MPLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x4EA5388))(this, value);
	}
	template <typename T = Il2CppString*> T get_begin_time_str() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5390))(this);
	}
	template <typename T = void> T set_begin_time_str(Il2CppString* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppString*))(Il2CppBase() + 0x4EA5398))(this, value);
	}
	template <typename T = Il2CppString*> T get_end_time_str() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA53A0))(this);
	}
	template <typename T = void> T set_end_time_str(Il2CppString* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppString*))(Il2CppBase() + 0x4EA53A8))(this, value);
	}
	template <typename T = uint32_t> T get_begin_time() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA53B0))(this);
	}
	template <typename T = void> T set_begin_time(uint32_t value) {
		return ((T (*)(MPLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x4EA53B8))(this, value);
	}
	template <typename T = uint32_t> T get_end_time() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA53C0))(this);
	}
	template <typename T = void> T set_end_time(uint32_t value) {
		return ((T (*)(MPLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x4EA53C8))(this, value);
	}
	template <typename T = uint32_t> T get_SeasonNumber() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA53D0))(this);
	}
	template <typename T = void> T set_SeasonNumber(uint32_t value) {
		return ((T (*)(MPLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x4EA53D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_SeasonName() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA53E0))(this);
	}
	template <typename T = void> T set_LOCID_SeasonName(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA53E8))(this, value);
	}
	template <typename T = uint32_t> T get_ShowAwardItem1() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA53F0))(this);
	}
	template <typename T = void> T set_ShowAwardItem1(uint32_t value) {
		return ((T (*)(MPLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x4EA53F8))(this, value);
	}
	template <typename T = uint32_t> T get_ShowAwardItem2() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5400))(this);
	}
	template <typename T = void> T set_ShowAwardItem2(uint32_t value) {
		return ((T (*)(MPLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x4EA5408))(this, value);
	}
	template <typename T = uint32_t> T get_ShowAwardItem3() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5410))(this);
	}
	template <typename T = void> T set_ShowAwardItem3(uint32_t value) {
		return ((T (*)(MPLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x4EA5418))(this, value);
	}
	template <typename T = uint32_t> T get_ShowAwardSuperItem() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5420))(this);
	}
	template <typename T = void> T set_ShowAwardSuperItem(uint32_t value) {
		return ((T (*)(MPLadderSeasonInfo*, uint32_t))(Il2CppBase() + 0x4EA5428))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowAwardSuperTexture() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5430))(this);
	}
	template <typename T = void> T set_ShowAwardSuperTexture(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5438))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SeasonVideoPart1() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5440))(this);
	}
	template <typename T = void> T set_SeasonVideoPart1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5448))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SeasonVideoPart2() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5450))(this);
	}
	template <typename T = void> T set_SeasonVideoPart2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5458))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AudioBnk() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5460))(this);
	}
	template <typename T = void> T set_AudioBnk(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5468))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AudioPlay() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5470))(this);
	}
	template <typename T = void> T set_AudioPlay(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5478))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AudioStop() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5480))(this);
	}
	template <typename T = void> T set_AudioStop(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5488))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SeasonLogo() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA5490))(this);
	}
	template <typename T = void> T set_SeasonLogo(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA5498))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowSeasonLogo() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA54A0))(this);
	}
	template <typename T = void> T set_ShowSeasonLogo(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA54A8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SeasonEntranceBackground() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA54B0))(this);
	}
	template <typename T = void> T set_SeasonEntranceBackground(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA54B8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RankDetailBg() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA54C0))(this);
	}
	template <typename T = void> T set_RankDetailBg(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA54C8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RankLeaderboard() {
		return ((T (*)(MPLadderSeasonInfo*))(Il2CppBase() + 0x4EA54D0))(this);
	}
	template <typename T = void> T set_RankLeaderboard(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MPLadderSeasonInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA54D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MPLadderSeasonInfo*, bool))(Il2CppBase() + 0x4EA54E0))(this, createIfMissing);
	}

};

}
