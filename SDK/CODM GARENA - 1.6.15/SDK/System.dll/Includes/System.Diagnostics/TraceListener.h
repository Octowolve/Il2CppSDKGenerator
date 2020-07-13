#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Diagnostics {

class TraceListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Diagnostics", "TraceListener"));
	}

	template <typename T = int32_t> T& indentLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& indentSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& attributes() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& filter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& options() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& needIndent() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_IndentLevel() {
		return ((T (*)(TraceListener*))(Il2CppBase() + 0x42B0CD0))(this);
	}
	template <typename T = void> T set_IndentLevel(int32_t value) {
		return ((T (*)(TraceListener*, int32_t))(Il2CppBase() + 0x42B0CD8))(this, value);
	}
	template <typename T = int32_t> T get_IndentSize() {
		return ((T (*)(TraceListener*))(Il2CppBase() + 0x42B0CE0))(this);
	}
	template <typename T = void> T set_IndentSize(int32_t value) {
		return ((T (*)(TraceListener*, int32_t))(Il2CppBase() + 0x42B0CE8))(this, value);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(TraceListener*, Il2CppString*))(Il2CppBase() + 0x42B0CF0))(this, value);
	}
	template <typename T = bool> T get_NeedIndent() {
		return ((T (*)(TraceListener*))(Il2CppBase() + 0x42AC0DC))(this);
	}
	template <typename T = void> T set_NeedIndent(bool value) {
		return ((T (*)(TraceListener*, bool))(Il2CppBase() + 0x42AC468))(this, value);
	}
	template <typename T = bool> T get_IsThreadSafe() {
		return ((T (*)(TraceListener*))(Il2CppBase() + 0x42B0CF8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(TraceListener*))(Il2CppBase() + 0x42B0D00))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(TraceListener*, bool))(Il2CppBase() + 0x42B0D38))(this, disposing);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(TraceListener*))(Il2CppBase() + 0x42B0D3C))(this);
	}
	template <typename T = void> T Write(Il2CppString* message) {
		return ((T (*)(TraceListener*, Il2CppString*))(Il2CppBase() + 0x0))(this, message);
	}
	template <typename T = void> T WriteIndent() {
		return ((T (*)(TraceListener*))(Il2CppBase() + 0x42B0D40))(this);
	}
	template <typename T = void> T WriteLine(Il2CppString* message) {
		return ((T (*)(TraceListener*, Il2CppString*))(Il2CppBase() + 0x0))(this, message);
	}
	template <typename T = Il2CppString*> static T FormatArray(uintptr_t list, Il2CppString* joiner) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x42B0D8C))(0, list, joiner);
	}
	template <typename T = void> T TraceData(uintptr_t eventCache, Il2CppString* source, uintptr_t eventType, int32_t id, uintptr_t data) {
		return ((T (*)(TraceListener*, uintptr_t, Il2CppString*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x42B1270))(this, eventCache, source, eventType, id, data);
	}
	template <typename T = void> T TraceEvent(uintptr_t eventCache, Il2CppString* source, uintptr_t eventType, int32_t id, Il2CppString* message) {
		return ((T (*)(TraceListener*, uintptr_t, Il2CppString*, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x42B1934))(this, eventCache, source, eventType, id, message);
	}
	template <typename T = uintptr_t> T get_Filter() {
		return ((T (*)(TraceListener*))(Il2CppBase() + 0x42B1924))(this);
	}
	template <typename T = uintptr_t> T get_TraceOutputOptions() {
		return ((T (*)(TraceListener*))(Il2CppBase() + 0x42B192C))(this);
	}

};

}
