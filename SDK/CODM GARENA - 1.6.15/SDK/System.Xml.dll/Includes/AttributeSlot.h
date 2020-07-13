#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttributeSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "AttributeSlot"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& LocalName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& NS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Prefix() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsDefault() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(AttributeSlot*))(Il2CppBase() + 0x4E1A5D8))(this);
	}

};

}
