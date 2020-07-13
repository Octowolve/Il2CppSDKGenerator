#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class HtCompiler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "HtCompiler"));
	}

	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& d() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& CompiledWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& CompiledHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAcquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Compile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Compile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MergeSameTextChunks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Offset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T OnAcquire() {
		return ((T (*)(HtCompiler*))(Il2CppBase() + 0x4763F28))(this);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(HtCompiler*))(Il2CppBase() + 0x4764024))(this);
	}
	template <typename T = int32_t> T get_CompiledWidth() {
		return ((T (*)(HtCompiler*))(Il2CppBase() + 0x475DE98))(this);
	}
	template <typename T = void> T set_CompiledWidth(int32_t value) {
		return ((T (*)(HtCompiler*, int32_t))(Il2CppBase() + 0x47640E4))(this, value);
	}
	template <typename T = int32_t> T get_CompiledHeight() {
		return ((T (*)(HtCompiler*))(Il2CppBase() + 0x475DEA0))(this);
	}
	template <typename T = void> T set_CompiledHeight(int32_t value) {
		return ((T (*)(HtCompiler*, int32_t))(Il2CppBase() + 0x47640EC))(this, value);
	}
	template <typename T = Il2CppString*> T GetLink(int32_t x, int32_t y) {
		return ((T (*)(HtCompiler*, int32_t, int32_t))(Il2CppBase() + 0x47640F4))(this, x, y);
	}
	template <typename T = void> T Compile(Il2CppString* source, int32_t width) {
		return ((T (*)(HtCompiler*, Il2CppString*, int32_t))(Il2CppBase() + 0x4764394))(this, source, width);
	}
	template <typename T = void> T Compile_1(void* source, int32_t width, Il2CppString* id, uintptr_t font, uintptr_t color, uintptr_t align, uintptr_t valign) {
		return ((T (*)(HtCompiler*, void*, int32_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x475D318))(this, source, width, id, font, color, align, valign);
	}
	template <typename T = void> T UpdateHeight() {
		return ((T (*)(HtCompiler*))(Il2CppBase() + 0x4764EB0))(this);
	}
	template <typename T = void> T MergeSameTextChunks() {
		return ((T (*)(HtCompiler*))(Il2CppBase() + 0x4764658))(this);
	}
	template <typename T = void> T Draw(float deltaTime, uintptr_t userData) {
		return ((T (*)(HtCompiler*, float, uintptr_t))(Il2CppBase() + 0x475DB40))(this, deltaTime, userData);
	}
	template <typename T = void> T Offset(int32_t dx, int32_t dy) {
		return ((T (*)(HtCompiler*, int32_t, int32_t))(Il2CppBase() + 0x475D930))(this, dx, dy);
	}

};

}
