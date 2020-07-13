#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBScoreStreak
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBScoreStreak"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBScoreStreak*))(Il2CppBase() + 0x52261FC))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBScoreStreak*, uintptr_t))(Il2CppBase() + 0x5226204))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBScoreStreak*, bool))(Il2CppBase() + 0x522620C))(this, createIfMissing);
	}

};

}
