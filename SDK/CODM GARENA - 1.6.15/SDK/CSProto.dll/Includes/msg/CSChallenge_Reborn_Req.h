#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeRebornReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_Reborn_Req"));
	}

	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _prop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChallengeRebornReq*))(Il2CppBase() + 0x51E63B0))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChallengeRebornReq*, int32_t))(Il2CppBase() + 0x51E63B8))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSChallengeRebornReq*))(Il2CppBase() + 0x51E63C0))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSChallengeRebornReq*, int32_t))(Il2CppBase() + 0x51E63C8))(this, value);
	}
	template <typename T = uintptr_t> T get_prop() {
		return ((T (*)(CSChallengeRebornReq*))(Il2CppBase() + 0x51E63D0))(this);
	}
	template <typename T = void> T set_prop(uintptr_t value) {
		return ((T (*)(CSChallengeRebornReq*, uintptr_t))(Il2CppBase() + 0x51E63D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeRebornReq*, bool))(Il2CppBase() + 0x51E63E0))(this, createIfMissing);
	}

};

}
