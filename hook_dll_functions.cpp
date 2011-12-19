hook_dll_functions(int dll_base_address, test_hash) {
char *lpModuleName;
func_ptr;
int address;
if(dll_base_address == 0) {
	// get address of ntdll.dll
	address = address_of_ntdll;
}
else if(dll_base_address == 1) {
	// get address of kernel32.dll
	address = address_of_kernel32;
	func_ptr1 = get_function_address(address, test_hash);
	if(func_ptr1 == 0) {
		func_ptr2 = get_function_address(address, 0xA48D6762); //GetModuleHandleA
		if(func_ptr2(lpModuleName) == 0) {
			func_ptr3 = get_function_address(address, 0x20088E6A); // LoadLibraryExA
			if(func_ptr3 == 0) {
				return 0;
			}
			else {
				address = func_ptr3(lpModuleName, 0, 0);
			}
		else {
			get_function_address(func_ptr2(lpModuleName), test_hash);
		}
	}
}
else {
	address = dll_base_address;
}

////////////////////////////////////////////////////////////////////////////

func_ptr = get_function_address(address, test_hash);
if(func_ptr == 0) {
	return func_ptr;
}

if(dll_base_address == 1) {
	dword = // dword at func_ptr
	if(dword == 0x6C64746E) {
		// get address of ntdll.dll
		address_ntdll = //address of ntdll
		func_ptr = sub_401000(dword, address_ntdll);
	}

	else if(dword != 0x4C44544E) {
		// get address of ntdll.dll
		address_ntdll = //address of ntdll
		func_ptr = sub_401000(dword, address_ntdll);
	}
		
	return func_ptr;
}
