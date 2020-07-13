#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLotteryDescRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLotteryDescRes"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _desc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _desc_md5() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_desc() {
		return ((T (*)(CSLotteryDescRes*))(Il2CppBase() + 0x51EF020))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_desc_md5() {
		return ((T (*)(CSLotteryDescRes*))(Il2CppBase() + 0x51EF028))(this);
	}
	template <typename T = void> T set_desc_md5(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLotteryDescRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51EF030))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLotteryDescRes*, bool))(Il2CppBase() + 0x51EF038))(this, createIfMissing);
	}

};

}
