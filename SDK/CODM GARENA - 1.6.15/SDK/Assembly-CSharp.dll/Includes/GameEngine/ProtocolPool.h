#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ProtocolPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ProtocolPool"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kProtocolTypeCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMaxFreePoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_freePoolContainer() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Alloc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Recycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1DF7650))(0);
	}
	template <typename T = uintptr_t> T Alloc(uintptr_t matchType) {
		return ((T (*)(ProtocolPool*, uintptr_t))(Il2CppBase() + 0x335373C))(this, matchType);
	}
	template <typename T = void> T Recycle(uintptr_t msg) {
		return ((T (*)(ProtocolPool*, uintptr_t))(Il2CppBase() + 0x1DF7700))(this, msg);
	}

};

}
