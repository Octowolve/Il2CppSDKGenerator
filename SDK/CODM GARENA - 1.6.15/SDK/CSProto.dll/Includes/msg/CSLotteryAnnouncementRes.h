#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLotteryAnnouncementRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLotteryAnnouncementRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _announcement() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLotteryAnnouncementRes*))(Il2CppBase() + 0x51EEE28))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLotteryAnnouncementRes*, int32_t))(Il2CppBase() + 0x51EEE30))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_announcement() {
		return ((T (*)(CSLotteryAnnouncementRes*))(Il2CppBase() + 0x51EEE38))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLotteryAnnouncementRes*, bool))(Il2CppBase() + 0x51EEE40))(this, createIfMissing);
	}

};

}
