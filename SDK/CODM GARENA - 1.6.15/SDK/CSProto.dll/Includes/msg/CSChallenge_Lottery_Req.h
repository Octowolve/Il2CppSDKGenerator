#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeLotteryReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_Lottery_Req"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChallengeLotteryReq*))(Il2CppBase() + 0x51E61D4))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChallengeLotteryReq*, int32_t))(Il2CppBase() + 0x51E61DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeLotteryReq*, bool))(Il2CppBase() + 0x51E61E4))(this, createIfMissing);
	}

};

}
