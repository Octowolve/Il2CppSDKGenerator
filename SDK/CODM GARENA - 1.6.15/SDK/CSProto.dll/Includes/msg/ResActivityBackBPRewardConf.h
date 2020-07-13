#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResActivityBackBPRewardConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResActivityBackBPRewardConf"));
	}

	template <typename T = uint64_t> T& _activity_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _reward() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _loc_background() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _cdn_background() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _loc_title() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _loc_desc() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _season_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uint64_t> T get_activity_id() {
		return ((T (*)(ResActivityBackBPRewardConf*))(Il2CppBase() + 0x5070B04))(this);
	}
	template <typename T = void> T set_activity_id(uint64_t value) {
		return ((T (*)(ResActivityBackBPRewardConf*, uint64_t))(Il2CppBase() + 0x5070B0C))(this, value);
	}
	template <typename T = int32_t> T get_group_id() {
		return ((T (*)(ResActivityBackBPRewardConf*))(Il2CppBase() + 0x5070B1C))(this);
	}
	template <typename T = void> T set_group_id(int32_t value) {
		return ((T (*)(ResActivityBackBPRewardConf*, int32_t))(Il2CppBase() + 0x5070B24))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_reward() {
		return ((T (*)(ResActivityBackBPRewardConf*))(Il2CppBase() + 0x5070B2C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_loc_background() {
		return ((T (*)(ResActivityBackBPRewardConf*))(Il2CppBase() + 0x5070B34))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_cdn_background() {
		return ((T (*)(ResActivityBackBPRewardConf*))(Il2CppBase() + 0x5070B3C))(this);
	}
	template <typename T = Il2CppString*> T get_loc_title() {
		return ((T (*)(ResActivityBackBPRewardConf*))(Il2CppBase() + 0x5070B44))(this);
	}
	template <typename T = void> T set_loc_title(Il2CppString* value) {
		return ((T (*)(ResActivityBackBPRewardConf*, Il2CppString*))(Il2CppBase() + 0x5070B4C))(this, value);
	}
	template <typename T = Il2CppString*> T get_loc_desc() {
		return ((T (*)(ResActivityBackBPRewardConf*))(Il2CppBase() + 0x5070B54))(this);
	}
	template <typename T = void> T set_loc_desc(Il2CppString* value) {
		return ((T (*)(ResActivityBackBPRewardConf*, Il2CppString*))(Il2CppBase() + 0x5070B5C))(this, value);
	}
	template <typename T = int32_t> T get_season_id() {
		return ((T (*)(ResActivityBackBPRewardConf*))(Il2CppBase() + 0x5070B64))(this);
	}
	template <typename T = void> T set_season_id(int32_t value) {
		return ((T (*)(ResActivityBackBPRewardConf*, int32_t))(Il2CppBase() + 0x5070B6C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResActivityBackBPRewardConf*, bool))(Il2CppBase() + 0x5070B74))(this, createIfMissing);
	}

};

}
