#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Parser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Parser"));
	}

	template <typename T = Il2CppString*> T& _src() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _cur() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _length() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& formatError() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T get_AtEnd() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4D8F978))(this);
	}
	template <typename T = void> T ParseWhiteSpace() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4D8F990))(this);
	}
	template <typename T = bool> T ParseSign() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4D8FA70))(this);
	}
	template <typename T = int32_t> T ParseInt(bool optional) {
		return ((T (*)(Parser*, bool))(Il2CppBase() + 0x4D8FAD0))(this, optional);
	}
	template <typename T = bool> T ParseOptDot() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4D8FCD0))(this);
	}
	template <typename T = void> T ParseOptColon() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4D8FD30))(this);
	}
	template <typename T = int64_t> T ParseTicks() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4D8FD90))(this);
	}
	template <typename T = uintptr_t> T Execute() {
		return ((T (*)(Parser*))(Il2CppBase() + 0x4D8EF50))(this);
	}

};

}
