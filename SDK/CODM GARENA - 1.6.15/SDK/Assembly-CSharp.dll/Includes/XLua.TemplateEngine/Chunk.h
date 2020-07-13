#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace XLua.TemplateEngine {

class Chunk
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "XLua.TemplateEngine", "Chunk"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Text() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Type() {
		return ((T (*)(Chunk*))(Il2CppBase() + 0x4DC6938))(this);
	}
	template <typename T = void> T set_Type(uintptr_t value) {
		return ((T (*)(Chunk*, uintptr_t))(Il2CppBase() + 0x4DC6928))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(Chunk*))(Il2CppBase() + 0x4DC6940))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(Chunk*, Il2CppString*))(Il2CppBase() + 0x4DC6930))(this, value);
	}

};

}
