#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class InitializeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "InitializeInfo"));
	}

	template <typename T = Il2CppString*> T& PluginName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& GameId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& GameKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T WriteTo(uintptr_t writer) {
		return ((T (*)(InitializeInfo*, uintptr_t))(Il2CppBase() + 0x46AA714))(this, writer);
	}
	template <typename T = void> T ReadFrom(uintptr_t reader) {
		return ((T (*)(InitializeInfo*, uintptr_t))(Il2CppBase() + 0x46AA80C))(this, reader);
	}

};

}
