// Copyright (C) Codeplay Software Limited. All Rights Reserved.
// CL_STD: 3.0
kernel void scan_exclusive_max_ulong(global ulong *in, global ulong *out) {
  const size_t glid = get_global_linear_id();
  out[glid] = work_group_scan_exclusive_max(in[glid]);
}
