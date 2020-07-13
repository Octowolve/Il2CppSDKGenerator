#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeFetchInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_FetchInfo_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _challenge_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChallengeFetchInfoRes*))(Il2CppBase() + 0x51E61A0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChallengeFetchInfoRes*, int32_t))(Il2CppBase() + 0x51E61A8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_challenge_list() {
		return ((T (*)(CSChallengeFetchInfoRes*))(Il2CppBase() + 0x51E61B0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeFetchInfoRes*, bool))(Il2CppBase() + 0x51E61B8))(this, createIfMissing);
	}

};

}
