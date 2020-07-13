#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HotUpdate {

class HotUpdateManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HotUpdate", "HotUpdateManager"));
	}

	template <typename T = uintptr_t> T& gLuaEnv() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& gScriptEnv() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& gHotFix() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& gInjectScript() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& luaStart() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& luaShutdown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& luaPreTick() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& luaTick() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& luaPostTick() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& luaReset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Shutdown() {
		return ((T (*)(HotUpdateManager*))(Il2CppBase() + 0x47554BC))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(HotUpdateManager*, float))(Il2CppBase() + 0x4755830))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HotUpdateManager*))(Il2CppBase() + 0x4755870))(this);
	}
	template <typename T = void> T Load(int32_t hotUpdateType, Il2CppString* text) {
		return ((T (*)(HotUpdateManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x4755898))(this, hotUpdateType, text);
	}
	template <typename T = void> T RemoveAllLuaMethods() {
		return ((T (*)(HotUpdateManager*))(Il2CppBase() + 0x475551C))(this);
	}
	template <typename T = void> T Unload(int32_t hotUpdateType) {
		return ((T (*)(HotUpdateManager*, int32_t))(Il2CppBase() + 0x4755538))(this, hotUpdateType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T CodLuaLoader(uintptr_t fileName) {
		return ((T (*)(HotUpdateManager*, uintptr_t))(Il2CppBase() + 0x4755CDC))(this, fileName);
	}

};

}
