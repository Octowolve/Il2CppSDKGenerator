#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgScoreStreakRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgScoreStreakRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _score_streaks() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryChgScoreStreakRes*))(Il2CppBase() + 0x5137678))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryChgScoreStreakRes*, int32_t))(Il2CppBase() + 0x5137680))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_score_streaks() {
		return ((T (*)(CSInventoryChgScoreStreakRes*))(Il2CppBase() + 0x5137688))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgScoreStreakRes*, bool))(Il2CppBase() + 0x5137690))(this, createIfMissing);
	}

};

}