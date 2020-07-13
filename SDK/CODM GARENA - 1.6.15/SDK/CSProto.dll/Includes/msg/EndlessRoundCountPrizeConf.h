#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class EndlessRoundCountPrizeConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "EndlessRoundCountPrizeConf"));
	}

	template <typename T = int32_t> T& _Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _BeginTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _BoxId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _RoundCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _RewardNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _BeginTimestamp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _EndTimestamp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_Id() {
		return ((T (*)(EndlessRoundCountPrizeConf*))(Il2CppBase() + 0x5226C6C))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(EndlessRoundCountPrizeConf*, int32_t))(Il2CppBase() + 0x5226C74))(this, value);
	}
	template <typename T = Il2CppString*> T get_BeginTime() {
		return ((T (*)(EndlessRoundCountPrizeConf*))(Il2CppBase() + 0x5226C7C))(this);
	}
	template <typename T = void> T set_BeginTime(Il2CppString* value) {
		return ((T (*)(EndlessRoundCountPrizeConf*, Il2CppString*))(Il2CppBase() + 0x5226C84))(this, value);
	}
	template <typename T = Il2CppString*> T get_EndTime() {
		return ((T (*)(EndlessRoundCountPrizeConf*))(Il2CppBase() + 0x5226C8C))(this);
	}
	template <typename T = void> T set_EndTime(Il2CppString* value) {
		return ((T (*)(EndlessRoundCountPrizeConf*, Il2CppString*))(Il2CppBase() + 0x5226C94))(this, value);
	}
	template <typename T = int32_t> T get_BoxId() {
		return ((T (*)(EndlessRoundCountPrizeConf*))(Il2CppBase() + 0x5226C9C))(this);
	}
	template <typename T = void> T set_BoxId(int32_t value) {
		return ((T (*)(EndlessRoundCountPrizeConf*, int32_t))(Il2CppBase() + 0x5226CA4))(this, value);
	}
	template <typename T = int32_t> T get_RoundCount() {
		return ((T (*)(EndlessRoundCountPrizeConf*))(Il2CppBase() + 0x5226CAC))(this);
	}
	template <typename T = void> T set_RoundCount(int32_t value) {
		return ((T (*)(EndlessRoundCountPrizeConf*, int32_t))(Il2CppBase() + 0x5226CB4))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum() {
		return ((T (*)(EndlessRoundCountPrizeConf*))(Il2CppBase() + 0x5226CBC))(this);
	}
	template <typename T = void> T set_RewardNum(int32_t value) {
		return ((T (*)(EndlessRoundCountPrizeConf*, int32_t))(Il2CppBase() + 0x5226CC4))(this, value);
	}
	template <typename T = uint32_t> T get_BeginTimestamp() {
		return ((T (*)(EndlessRoundCountPrizeConf*))(Il2CppBase() + 0x5226CCC))(this);
	}
	template <typename T = void> T set_BeginTimestamp(uint32_t value) {
		return ((T (*)(EndlessRoundCountPrizeConf*, uint32_t))(Il2CppBase() + 0x5226CD4))(this, value);
	}
	template <typename T = uint32_t> T get_EndTimestamp() {
		return ((T (*)(EndlessRoundCountPrizeConf*))(Il2CppBase() + 0x5226CDC))(this);
	}
	template <typename T = void> T set_EndTimestamp(uint32_t value) {
		return ((T (*)(EndlessRoundCountPrizeConf*, uint32_t))(Il2CppBase() + 0x5226CE4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(EndlessRoundCountPrizeConf*, bool))(Il2CppBase() + 0x5226CEC))(this, createIfMissing);
	}

};

}
