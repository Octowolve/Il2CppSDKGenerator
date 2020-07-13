#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetBonusDescRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetBonusDescRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bonus_desc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _server_systime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGspGetBonusDescRes*))(Il2CppBase() + 0x51DF758))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGspGetBonusDescRes*, int32_t))(Il2CppBase() + 0x51DF760))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_bonus_desc() {
		return ((T (*)(CSGspGetBonusDescRes*))(Il2CppBase() + 0x51DF768))(this);
	}
	template <typename T = int32_t> T get_server_systime() {
		return ((T (*)(CSGspGetBonusDescRes*))(Il2CppBase() + 0x51DF770))(this);
	}
	template <typename T = void> T set_server_systime(int32_t value) {
		return ((T (*)(CSGspGetBonusDescRes*, int32_t))(Il2CppBase() + 0x51DF778))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetBonusDescRes*, bool))(Il2CppBase() + 0x51DF780))(this, createIfMissing);
	}

};

}
